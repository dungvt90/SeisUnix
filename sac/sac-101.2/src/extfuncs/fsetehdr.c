#include <string.h>

#include "../../inc/extfunc.h"

void fsetehdr_(hdr_index, fieldname, value, error, lenfield)
long *hdr_index;
char *fieldname;
long     *value;
long     *error;
long   lenfield;
{
  char infield[8];
  sac_header *hdr_in;

  hdr_in = indata->ext_hdrs[*hdr_index-1];

  memset(infield,' ',8);
  infield[8]='\0';

  getfield(fieldname, lenfield, infield);

  setehdr(hdr_in, infield, *value, error);

  return;

}