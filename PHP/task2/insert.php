<html>
<head>
    <title>Personalized Greeting Form</title>
</head>

<body>
   <?php
   $bookId = 0;
   $authorId = 0;
   $title = "";
   $ISBN = "";
   $pub_year = 1999;
   $available = 1;

   if(!empty($_POST['bookId '])) {
       $bookId = $_POST['bookId '];
   }

   if(!empty($_POST['authorId '])) {
       $bookId = $_POST['authorId '];
   }

   if(!empty($_POST['title '])) {
       $bookId = $_POST['title '];
   }

   if(!empty($_POST['ISBN '])) {
       $bookId = $_POST['ISBN '];
   }

   if(!empty($_POST['pub_year '])) {
       $bookId = $_POST['pub_year '];
   }
   ?>

   <form action="<?php echo $_SERVER['PHP_SELF']; ?>" method="post">
       Book id: <input type="text" name="bookid" />
       Author id: <input type="text" name="authorid" />
       Title: <input type="text" name="title" />
       ISBN: <input type="text" name="ISBN" />
       Public Year: <input type="text" name="pub_year" />
       Available: <input type="text" name="available" />
       <input type="submit" value="Add Book" />
   </form>
   <?php
   $myDB = new mysqli('localhost','root','','members');
   if ($myDB->connect_error)
   {
       die('Connect Error (' . $myDB->connect_errno . ')'
           . $myDB->connect_error);
   }
   if ($title != '' && $ISBN != ''){
       $insert = "INSERT INTO book (bookid, authoris, title, ISBN, pub_year,  available) VALUES 
        ($bookId,$authorId,'$title','$ISBN',$pub_year,$available)";
       echo $insert;
       $myDB->query($insert);
       echo "New record created succesfully";
   }
   if($title != ''){
       $sql = "SELECT * FROM book WHERE  available = 1 AND  title LIKE '%{$title}%'
       ORDER  BY title";
   }else{
       $sql = "SELECT * FROM book WHERE available = 1 
       ORDER  BY title";
   }
   $result = $myDB->query($sql);

   ?>
<table cellSpacing="2" cellpadding="6" align="center" border="1">
    <tr>
        <td colspan="4">
            <h3 align="center">These Books are currently available</h3>
        </td>
    </tr>
    <tr>
        <td align="center">Title</td>
        <td align="center">Year Published</td>
        <td align="center">ISBN</td>
    </tr>
    <?php
    while ($row = $result->fetch_assoc() ){
        echo "<tr>";
        echo "<td>";
        echo stripslashes($row["title"]);
        echo "</td><td align='center'>";
        echo $row["pub_year"];
        echo "</td><td>";
        echo $row["ISBN"];
        echo "</td>";
        echo "</tr>";

    }
    ?>
    </table>
</body>
</html>

