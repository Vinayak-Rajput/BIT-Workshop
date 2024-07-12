 AlbumsDAO albumsDAO = new AlbumsDAO();
 Album a1 = new Album()
 {
     ID = 1,
     AlbumName = "Test",
     ArtistName = "Vinayak",
     Year = 2002,
     ImageURL = "Nothing Yet",
     Description = "Nothing"
 };
 Album a2 = new Album()
 {
     ID = 2,
     AlbumName = "Test2",
     ArtistName = "Rajput",
     Year = 2003,
     ImageURL = "Nothing Yet",
     Description = "Nothing"
 };
 albumsDAO.albums.Add (a1);
 albumsDAO.albums.Add (a2);
 //Connect the list to the grid view control
 AlbumBindingSource.DataSource = albumsDAO.albums;
 dataGridView1.DataSource = AlbumBindingSource;
 private void button1_Click(object sender, EventArgs e)
{
    AlbumsDAO albumsDAO = new AlbumsDAO();

    //connect the list to the grid view control
    AlbumBindingSource.DataSource = albumsDAO.getAllAlbums();

    dataGridView1.DataSource = AlbumBindingSource;

    string url = "https://upload.wikimedia.org/wikipedia/en/thumb/3/39/8milecover.jpg/220px-8milecover.jpg"; // Replace with your actual URL

    using (HttpClient client = new HttpClient())
    {
        client.DefaultRequestHeaders.Add("User-Agent", "WindowsMusicApp/1.0 (your-email@example.com)");

        try
        {
            HttpResponseMessage response = client.GetAsync(url).Result;
            response.EnsureSuccessStatusCode();

            using (Stream stream = response.Content.ReadAsStream())
            {
                Image image = Image.FromStream(stream);
                pictureBox1.Image = image;
            }
        }
        catch (HttpRequestException ex)
        {
            MessageBox.Show($"An error occurred: {ex.Message}");
        }
    }
}