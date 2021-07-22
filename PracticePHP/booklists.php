<?php
$myDB = new mysqli('localhost','root','','library');
if ($myDB->connect_error)
{
    die('Connect Error (' . $myDB->connect_errno . ')'
        . $myDB->connect_error);
}
$sql = "SELECT * FROM books ORDER  BY title";
$result = $myDB->query($sql);
?>
<html>
<head>
    <meta  charset="utf-8">
    <title>Booklist</title>
    <link rel="stylesheet" href="bootstrap/css/bootstrap.min.css">

    <style type="text/css">
        .wrapper{
            width: 1000px;
            margin: 0 auto;
            margin-top: 150px;
        }
        .page-header h2{
            margin-top: 0;
        }

    </style>
</head>
<body>
<div class="wrapper">
<table cellSpacing="2" cellpadding="6" align="center" border="1">
    <tr>
        <td colspan="4">
            <h2 align="center">These Books are currently available</h2>
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
</div>
</body>
</html>





