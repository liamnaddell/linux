use warnings;

sub tel2u {
	my $message = shift;
	print $message;
}
sub prompt {
	print shift;
	my $response = <>;
	return $response;
}

sub Welcome {
	tel2u("My name is leam\n");
	return \&Name
}

sub Name {
	my $name = prompt("What is your name:");
	tel2u("Nice to meat u ". $name);
	return \&Exit;
}

sub Exit {
	exit
}
my $func = \&Welcome;

while (1==1) {
	$func = &$func();
}
