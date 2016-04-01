 <?php
    $host="localhost";
    $user="root";
    $pass=""; //установленный вами пароль
    $db_name="php";
    $link=mysql_connect($host,$user,$pass);
    mysql_select_db($db_name,$link);
?> 
 <?php
    $sql = mysql_query("SELECT 'id',`mraz`, `mraz2` FROM `info`", $link);
    while ($result = mysql_fetch_array($sql)) {
        echo $result['Name'].": ".$result['Price']." <br>";
    }
?> 