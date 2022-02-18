using Microsoft.AspNetCore.Http;
using System;
using System.Collections.Generic;
using System.ComponentModel.DataAnnotations;
using System.ComponentModel.DataAnnotations.Schema;
using System.Linq;
using System.Threading.Tasks;

namespace InteractiveImage.Models
{
    public class BookModel
    {
        [Key]
        public int BookID { get; set; }
        [Column(TypeName = "nvarchar(50)")]
        public string BookName { get; set; }
        [Column(TypeName = "nvarchar(50)")]
        public string Author { get; set; }
        [Column(TypeName = "nvarchar(50)")]
        public string Publisher { get; set; }
        [Column(TypeName = "nvarchar(100)")]
        public string ImageName { get; set; }
        [NotMapped]
        public IFormFile ImageFile { get; set; }
        [NotMapped]
        public string ImageSrc { get; set; }
    }
}
