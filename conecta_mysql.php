<?php
// PHP Data Objects(PDO) Sample Code:
try {
    $conn = new PDO("sqlsrv:server = tcp:yanborges.database.windows.net,1433; Database = ybdatagold", "yan.castro", "Borges_2006!");
    $conn->setAttribute(PDO::ATTR_ERRMODE, PDO::ERRMODE_EXCEPTION);
}
catch (PDOException $e) {
    print("Error connecting to SQL Server.");
    die(print_r($e));
}

// SQL Server Extension Sample Code:
$connectionInfo = array("UID" => "yan.castro", "pwd" => "Borges_2006!", "Database" => "ybdatagold", "LoginTimeout" => 30, "Encrypt" => 1, "TrustServerCertificate" => 0);
$serverName = "tcp:yanborges.database.windows.net,1433";
$conn = sqlsrv_connect($serverName, $connectionInfo);
?>
