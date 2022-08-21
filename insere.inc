<html>
<body>

<?php 


include 'conecta_mysql.inc';

$aval1			= $_POST['aval1'];
$aval2			= $_POST['aval2'];
$aval3			= $_POST['aval3'];
$aval4			= $_POST['aval4'];
$aval5			= $_POST['aval5'];
$aval6			= $_POST['aval6'];
$opn			= $_POST['opn'];

if ($aval1 == 1){				//aval1

	$aval1S = 1;
	$aval1N = null;
}
else{
	$aval1S = null;
	$aval1N = 1;
}

if ($aval2 == 1){				//aval2

	$aval2S = 1;
	$aval2N = null;
}
else{
	$aval2S = null;
	$aval2N = 1;
}

if ($aval3 == 1){				//aval3

	$aval3S = 1;
	$aval3N = null;
}
else{
	$aval3S = null;
	$aval3N = 1;
}

if ($aval4 == 1){				//aval4

	$aval4S = 1;
	$aval4N = null;
}
else{
	$aval4S = null;
	$aval4N = 1;
}

if ($aval5 == 1){				//aval5

	$aval5S = 1;
	$aval5N = null;
}
else{
	$aval5S = null;
	$aval5N = 1;
}

if ($aval6 == 1){				//aval6

	$aval6S = 1;
	$aval6N = null;
}
else{
	$aval6S = null;
	$aval6N = 1;
}


try
	    {
	        $tsql = " INSERT INTO [dbo].[avalNao] VALUES ";
	        $tsql.= "('$aval1N', '$aval2N', '$aval3N', '$aval4N', '$aval5N', '$aval6N')";
	        $tsql .= " INSERT INTO [dbo].[avalOpn] VALUES ";
	        $tsql.= "('$opn')";
	        $tsql .= " INSERT INTO [dbo].[avalSim] VALUES ";
	        $tsql.= "('$aval1S', '$aval2S', '$aval3S', '$aval4S', '$aval5S', '$aval6S')";

	        //Insert query
	        $insertReview = sqlsrv_query($conn, $tsql);
	        if($insertReview == FALSE)
	            die(FormatErrors( sqlsrv_errors()));
	        echo "<br>Parabéns, seus dados foram incluidos com sucesso!";
	        
	        sqlsrv_free_stmt($insertReview);
	        sqlsrv_close($conn);
	    }
	    catch(Exception $e)
	    {
	        echo("Error!");
	    }


	        

$conn->Close();

?>

</body>
</html>


