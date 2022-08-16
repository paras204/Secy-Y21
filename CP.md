# A. NEW TOWN
                time limit per test : 2 seconds
                memory limit per test : 256 megabytes
                input : standard input
                output : standard output
<br>
Ajeet visits a new town , he has to go for an event but he does not know the way , he asked a local about the way. The guy told him the way as a string of characters, but Ajeet is bad in memorising things , there are certain array of characters which he forgets easily . 
You have to determine the length of longest contiguous substring of s which does not contain any easily forgettable string.

## Input
First line contains string s given by local guy , length of s is between 1 and 10<sup>5</sup>.\
Second line contains, n(1<n<10) , number of easily forgettable strings.\
Next n lines ,there is string b<sub>i</sub>.\
Each character will be an English alphabet (both lower and upper) or underscor(_) or a digit. Strings are case-sensitive.
<br>
## Output
Output the length of longest continuous substring.

## Examples 
## input
Gostraight_take_left_take_anauto_tometro_station_moveahead\
6\
str\
auto\
to
metro\
ion\
ght

## output
23
-----------------------
### Note :
In this test case the longest substring starts from index = 8.



