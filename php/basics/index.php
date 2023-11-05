<html lang="EN">

<head>
    <title>PHP Example</title>
</head>

<body>
<?php echo "Hello, World! This is PHP code";?>
<br/>
<?php echo "In PHP, the elvis operator makes a falsy value check. If truthy then returns the left operand and if falsy, returns the righ operand";?>
<br/>
<?php echo "In PHP, falsy values are 0, false, null, '', '0', and 0"?>
<br/>
<?php
var_dump(42 ?: 0);
?>
<br/>
<?php
var_dump(false ?: 42);
?>
<br/>
<?php
var_dump(null ?: 42);
?>
<br/>
<?php
var_dump(true ?: 42);
?>
<br/>
<?php
var_dump('42' ?: 42);
?>
<br/>
<?php
var_dump('' ?: 42);
?>
<br/>
<?php
var_dump('0' ?: 42);
?>
<br/>
<?php
var_dump(0 ?: 42);
?>
<br/>
<?php
var_dump(NAN ?: 42);
?>
</body>

</html>