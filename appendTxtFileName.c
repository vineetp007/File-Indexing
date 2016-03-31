// Appends txtFileName to end of FILE_LINK.
// lastLineOffset = adress of last record.
int appendTxtFileName(char *txtFileName)
{
	FILE *fp=fopen(FILE_LINK,"ab+");
	fseek(fp,0,SEEK_END);
	int lastLineOffset = ftell(fp);
	struct file t;
	strcpy(t.word,txtFileName);
	t.offset = -1;
	fwrite(&t,sizeof(t),1,fp);
	fclose(fp);
	return lastLineOffset;
}