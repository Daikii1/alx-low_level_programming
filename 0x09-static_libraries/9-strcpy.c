/**
 * _strcpy - its a function that copies the string pointed to by src into dest.
 *
 * @dest: destinatination
 * @src: source
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int cpt = 0;

	while (src[cpt] != '\0')
	{
		dest[cpt] = src[cpt];
		cpt++;
	}
	dest[cpt] = '\0';
	return (dest);
}
