<html>
<body>

<?php 

$aval1			= $_POST['aval1'];
$aval2			= $_POST['aval2'];
$aval3			= $_POST['aval3'];
$aval4			= $_POST['aval4'];
$aval5			= $_POST['aval5'];
$aval6			= $_POST['aval6'];
$opn			= $_POST['opn'];
$erro 		= 0;

if ((empty($aval1))==(true)){
	echo "Preencha todos os dados da primeira pergunta!<br>";
   $erro=1;
}

if ((empty($aval2))==(true)){
	echo "Preencha todos os dados da segunda pergunta!<br>";
   $erro=1;
}

if ((empty($aval3))==(true)){
	echo "Preencha todos os dados da terceira pergunta!<br>";
   $erro=1;
}

if ((empty($aval4))==(true)){
	echo "Preencha todos os dados da quarta pergunta!<br>";
   $erro=1;
}

if ((empty($aval5))==(true)){
	echo "Preencha todos os dados da quinta pergunta!<br>";
   $erro=1;
}

if ((empty($aval6))==(true)){
	echo "Preencha todos os dados da sexta pergunta!<br>";
   $erro=1;
}

if ((strlen($opn)>100)==true){
	echo "<br>No seu texto há muitos caracteres, o máximo são 100!";
	$erro = 1;
}

if ($erro==0){
   echo "Obrigado pela sua avaliação <br>";
   include 'insere.inc';
}
?>


</body>
</html>
