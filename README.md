# ✅ ft_printf

## My own printf

### Flags
	
| Flag | Description |
| -------- | -------- |
| - |	Align replaced text to the left when enough width is given |
| 0 |	Add '0' as a padding character in numeric conversions |
| +	| Add a plus sign ('+') in the front of positive numeric conversions |
| #	| Alternate input method for placeholder |
| (space) | If no sign is going to be written, a blank space is inserted before the value |


| Width | .precision | Length |
| -------- | -------- | -------- |
|(number)| .number |  h & hh|
| * | .* | l & ll |


### Specifier
| Specifier |	Output |
| -------- | -------- |
| c | Character |
| s | String of characters |
| d or i | Signed decimal integer |
| u | Unsigned decimal integer |
| x | Unsigned hexadecimal integer |
| X | Unsigned hexadecimal integer (capital letters) |
| o | Signed octal |
| p | Pointer address |
| n | Nothing printed, set int pointer value |
