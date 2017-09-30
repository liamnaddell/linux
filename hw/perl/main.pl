use strict;
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

my $age = prompt("Welcome to my story game, what is your age?\n");
tel2u($age);
