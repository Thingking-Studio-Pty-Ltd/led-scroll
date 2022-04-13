#define FONTSIZE  100

char alphaNums[FONTSIZE] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', '1', '2', '3', '4', '5', '6', '7', '8', '9', '0', ' ', '.', '!', '-', '#', '@', '%', '+', '\'', '"', ';', '(', ')', '&', '$', '+', ':'};

char imageNums[FONTSIZE] = {'~', '`', '^'};

boolean alphaNumsFont[FONTSIZE][10][10] = {
  {
    { 0, 0, 1, 1, 1, 1, 0, 0, 0, 0 },
    { 0, 1, 1, 0, 0, 1, 1, 0, 0, 0 },
    { 1, 1, 0, 0, 0, 0, 1, 1, 0, 0 },
    { 1, 1, 0, 0, 0, 0, 1, 1, 0, 0 },
    { 1, 1, 1, 1, 1, 1, 1, 1, 0, 0 },
    { 1, 1, 1, 1, 1, 1, 1, 1, 0, 0 },
    { 1, 1, 0, 0, 0, 0, 1, 1, 0, 0 },
    { 1, 1, 0, 0, 0, 0, 1, 1, 0, 0 },
    { 1, 1, 0, 0, 0, 0, 1, 1, 0, 0 },
    { 1, 1, 0, 0, 0, 0, 1, 1, 0, 0 },
  },
  {
    { 1, 1, 1, 1, 1, 1, 0, 0, 0, 0 },
    { 1, 1, 1, 1, 1, 1, 1, 0, 0, 0 },
    { 1, 1, 0, 0, 0, 0, 1, 1, 0, 0 },
    { 1, 1, 0, 0, 0, 0, 1, 1, 0, 0 },
    { 1, 1, 1, 1, 1, 1, 1, 1, 0, 0 },
    { 1, 1, 1, 1, 1, 1, 1, 0, 0, 0 },
    { 1, 1, 0, 0, 0, 0, 1, 0, 0, 0 },
    { 1, 1, 0, 0, 0, 0, 1, 1, 0, 0 },
    { 1, 1, 1, 1, 1, 1, 1, 1, 0, 0 },
    { 1, 1, 1, 1, 1, 1, 1, 0, 0, 0 },
  },
  { 
    { 0, 0, 1, 1, 1, 1, 0, 0, 0, 0 },
    { 0, 1, 1, 1, 1, 1, 1, 0, 0, 0 },
    { 1, 1, 1, 0, 0, 1, 1, 1, 0, 0 },
    { 1, 1, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 1, 1, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 1, 1, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 1, 1, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 1, 1, 1, 0, 0, 1, 1, 1, 0, 0 },
    { 0, 1, 1, 1, 1, 1, 1, 0, 0, 0 },
    { 0, 0, 1, 1, 1, 1, 0, 0, 0, 0 },
  },

  { 
    { 1, 1, 1, 1, 1, 1, 0, 0, 0, 0 },
    { 1, 1, 1, 1, 1, 1, 1, 0, 0, 0 },
    { 1, 1, 0, 0, 0, 0, 1, 1, 0, 0 },
    { 1, 1, 0, 0, 0, 0, 1, 1, 0, 0 },
    { 1, 1, 0, 0, 0, 0, 1, 1, 0, 0 },
    { 1, 1, 0, 0, 0, 0, 1, 1, 0, 0 },
    { 1, 1, 0, 0, 0, 0, 1, 1, 0, 0 },
    { 1, 1, 0, 0, 0, 0, 1, 1, 0, 0 },
    { 1, 1, 1, 1, 1, 1, 1, 0, 0, 0 },
    { 1, 1, 1, 1, 1, 1, 0, 0, 0, 0 },
  },
  {
    { 1, 1, 1, 1, 1, 1, 1, 1, 0, 0 },
    { 1, 1, 1, 1, 1, 1, 1, 1, 0, 0 },
    { 1, 1, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 1, 1, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 1, 1, 1, 1, 1, 1, 1, 1, 0, 0 },
    { 1, 1, 1, 1, 1, 1, 1, 1, 0, 0 },
    { 1, 1, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 1, 1, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 1, 1, 1, 1, 1, 1, 1, 1, 0, 0 },
    { 1, 1, 1, 1, 1, 1, 1, 1, 0, 0 },
  },
  {
    { 1, 1, 1, 1, 1, 1, 1, 1, 0, 0 },
    { 1, 1, 1, 1, 1, 1, 1, 1, 0, 0 },
    { 1, 1, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 1, 1, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 1, 1, 1, 1, 1, 1, 0, 0, 0, 0 },
    { 1, 1, 1, 1, 1, 1, 0, 0, 0, 0 },
    { 1, 1, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 1, 1, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 1, 1, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 1, 1, 0, 0, 0, 0, 0, 0, 0, 0 },
  },
  {
    { 0, 0, 0, 1, 1, 1, 1, 1, 0, 0 },
    { 0, 0, 1, 1, 1, 1, 1, 1, 0, 0 },
    { 0, 1, 1, 1, 0, 0, 1, 1, 0, 0 },
    { 1, 1, 0, 0, 0, 0, 1, 1, 0, 0 },
    { 1, 1, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 1, 1, 0, 0, 1, 1, 1, 1, 0, 0 },
    { 1, 1, 0, 0, 1, 1, 1, 1, 0, 0 },
    { 1, 1, 0, 0, 0, 0, 1, 1, 0, 0 },
    { 0, 1, 1, 1, 1, 1, 1, 1, 0, 0 },
    { 0, 0, 1, 1, 1, 1, 1, 0, 0, 0 },
  },
  {
    { 1, 1, 0, 0, 0, 0, 1, 1, 0, 0 },
    { 1, 1, 0, 0, 0, 0, 1, 1, 0, 0 },
    { 1, 1, 0, 0, 0, 0, 1, 1, 0, 0 },
    { 1, 1, 0, 0, 0, 0, 1, 1, 0, 0 },
    { 1, 1, 1, 1, 1, 1, 1, 1, 0, 0 },
    { 1, 1, 1, 1, 1, 1, 1, 1, 0, 0 },
    { 1, 1, 0, 0, 0, 0, 1, 1, 0, 0 },
    { 1, 1, 0, 0, 0, 0, 1, 1, 0, 0 },
    { 1, 1, 0, 0, 0, 0, 1, 1, 0, 0 },
    { 1, 1, 0, 0, 0, 0, 1, 1, 0, 0 },
  },
  { 
    { 1, 1, 1, 1, 1, 1, 1, 1, 0, 0 },
    { 1, 1, 1, 1, 1, 1, 1, 1, 0, 0 },
    { 0, 0, 0, 1, 1, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 1, 1, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 1, 1, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 1, 1, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 1, 1, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 1, 1, 0, 0, 0, 0, 0 },
    { 1, 1, 1, 1, 1, 1, 1, 1, 0, 0 },
    { 1, 1, 1, 1, 1, 1, 1, 1, 0, 0 },
  },
  { 
    { 0, 0, 0, 0, 0, 0, 1, 1, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 1, 1, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 1, 1, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 1, 1, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 1, 1, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 1, 1, 0, 0 },
    { 1, 1, 1, 0, 0, 0, 1, 1, 0, 0 },
    { 1, 1, 1, 0, 0, 0, 1, 1, 0, 0 },
    { 0, 1, 1, 1, 1, 1, 1, 0, 0, 0 },
    { 0, 1, 1, 1, 1, 1, 1, 0, 0, 0 },
  },

  { 
    { 1, 1, 0, 0, 0, 0, 1, 1, 0, 0 },
    { 1, 1, 0, 0, 0, 1, 1, 0, 0, 0 },
    { 1, 1, 0, 0, 1, 1, 0, 0, 0, 0 },
    { 1, 1, 0, 1, 1, 0, 0, 0, 0, 0 },
    { 1, 1, 1, 1, 0, 0, 0, 0, 0, 0 },
    { 1, 1, 1, 1, 0, 0, 0, 0, 0, 0 },
    { 1, 1, 0, 1, 1, 0, 0, 0, 0, 0 },
    { 1, 1, 0, 0, 1, 1, 0, 0, 0, 0 },
    { 1, 1, 0, 0, 0, 1, 1, 0, 0, 0 },
    { 1, 1, 0, 0, 0, 0, 1, 1, 0, 0 },
  },
  { 
    { 1, 1, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 1, 1, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 1, 1, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 1, 1, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 1, 1, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 1, 1, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 1, 1, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 1, 1, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 1, 1, 1, 1, 1, 1, 1, 1, 0, 0 },
    { 1, 1, 1, 1, 1, 1, 1, 1, 0, 0 },
  },
  { 
    { 1, 1, 0, 0, 0, 0, 1, 1, 0, 0 },
    { 1, 1, 1, 0, 0, 1, 1, 1, 0, 0 },
    { 1, 1, 1, 0, 0, 1, 1, 1, 0, 0 },
    { 1, 1, 1, 1, 1, 1, 1, 1, 0, 0 },
    { 1, 1, 0, 1, 1, 0, 1, 1, 0, 0 },
    { 1, 1, 0, 1, 1, 0, 1, 1, 0, 0 },
    { 1, 1, 0, 0, 0, 0, 1, 1, 0, 0 },
    { 1, 1, 0, 0, 0, 0, 1, 1, 0, 0 },
    { 1, 1, 0, 0, 0, 0, 1, 1, 0, 0 },
    { 1, 1, 0, 0, 0, 0, 1, 1, 0, 0 },
  },
  { 
    { 1, 1, 0, 0, 0, 0, 1, 1, 0, 0 },
    { 1, 1, 0, 0, 0, 0, 1, 1, 0, 0 },
    { 1, 1, 1, 0, 0, 0, 1, 1, 0, 0 },
    { 1, 1, 1, 0, 0, 0, 1, 1, 0, 0 },
    { 1, 1, 0, 1, 0, 0, 1, 1, 0, 0 },
    { 1, 1, 0, 1, 1, 0, 1, 1, 0, 0 },
    { 1, 1, 0, 0, 1, 1, 1, 1, 0, 0 },
    { 1, 1, 0, 0, 0, 1, 1, 1, 0, 0 },
    { 1, 1, 0, 0, 0, 0, 1, 1, 0, 0 },
    { 1, 1, 0, 0, 0, 0, 1, 1, 0, 0 },
  },

  { 
    { 0, 0, 1, 1, 1, 1, 0, 0, 0, 0 },
    { 0, 1, 1, 0, 0, 1, 1, 0, 0, 0 },
    { 1, 1, 0, 0, 0, 0, 1, 1, 0, 0 },
    { 1, 1, 0, 0, 0, 0, 1, 1, 0, 0 },
    { 1, 1, 0, 0, 0, 0, 1, 1, 0, 0 },
    { 1, 1, 0, 0, 0, 0, 1, 1, 0, 0 },
    { 1, 1, 0, 0, 0, 0, 1, 1, 0, 0 },
    { 1, 1, 0, 0, 0, 0, 1, 1, 0, 0 },
    { 0, 1, 1, 0, 0, 1, 1, 0, 0, 0 },
    { 0, 0, 1, 1, 1, 1, 1, 0, 0, 0 },
  },
  { 
    { 1, 1, 1, 1, 1, 1, 0, 0, 0, 0 },
    { 1, 1, 1, 1, 1, 1, 1, 0, 0, 0 },
    { 1, 1, 0, 0, 0, 0, 1, 1, 0, 0 },
    { 1, 1, 0, 0, 0, 0, 1, 1, 0, 0 },
    { 1, 1, 0, 0, 0, 0, 1, 1, 0, 0 },
    { 1, 1, 1, 1, 1, 1, 1, 1, 0, 0 },
    { 1, 1, 1, 1, 1, 1, 1, 0, 0, 0 },
    { 1, 1, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 1, 1, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 1, 1, 0, 0, 0, 0, 0, 0, 0, 0 },
  },
  { 
    { 0, 0, 1, 1, 1, 1, 0, 0, 0, 0 },
    { 0, 1, 1, 0, 0, 1, 1, 0, 0, 0 },
    { 1, 1, 0, 0, 0, 0, 1, 1, 0, 0 },
    { 1, 1, 0, 0, 0, 0, 1, 1, 0, 0 },
    { 1, 1, 0, 0, 0, 0, 1, 1, 0, 0 },
    { 1, 1, 0, 0, 0, 0, 1, 1, 0, 0 },
    { 1, 1, 0, 1, 1, 0, 1, 1, 0, 0 },
    { 1, 1, 0, 0, 1, 1, 1, 1, 0, 0 },
    { 1, 1, 0, 0, 0, 1, 1, 0, 0, 0 },
    { 0, 1, 1, 1, 1, 1, 0, 1, 0, 0 },
  },
  { 
    { 1, 1, 1, 1, 1, 1, 1, 0, 0, 0 },
    { 1, 1, 1, 1, 0, 1, 1, 0, 0, 0 },
    { 1, 1, 0, 0, 0, 0, 1, 1, 0, 0 },
    { 1, 1, 0, 0, 0, 0, 1, 1, 0, 0 },
    { 1, 1, 0, 0, 0, 1, 1, 1, 0, 0 },
    { 1, 1, 1, 1, 1, 0, 0, 0, 0, 0 },
    { 1, 1, 1, 1, 1, 1, 1, 0, 0, 0 },
    { 1, 1, 0, 0, 1, 1, 1, 0, 0, 0 },
    { 1, 1, 0, 0, 0, 1, 1, 1, 0, 0 },
    { 1, 1, 0, 0, 0, 0, 1, 1, 0, 0 },
  },
  { 
    { 0, 1, 1, 1, 1, 1, 1, 0, 0, 0 },
    { 1, 1, 1, 1, 1, 1, 1, 0, 0, 0 },
    { 1, 1, 1, 0, 0, 0, 1, 1, 0, 0 },
    { 1, 1, 1, 0, 0, 0, 0, 0, 0, 0 },
    { 1, 1, 1, 1, 1, 1, 1, 0, 0, 0 },
    { 0, 1, 1, 1, 1, 1, 1, 1, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 1, 1, 0, 0 },
    { 1, 1, 0, 0, 0, 0, 1, 1, 0, 0 },
    { 1, 1, 1, 1, 1, 1, 1, 1, 0, 0 },
    { 0, 0, 1, 1, 1, 1, 1, 0, 0, 0 },
  },
  { 
    { 1, 1, 1, 1, 1, 1, 1, 1, 0, 0 },
    { 1, 1, 1, 1, 1, 1, 1, 1, 0, 0 },
    { 0, 0, 0, 1, 1, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 1, 1, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 1, 1, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 1, 1, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 1, 1, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 1, 1, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 1, 1, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 1, 1, 0, 0, 0, 0, 0 },
  },
  { 
    { 1, 1, 0, 0, 0, 0, 1, 1, 0, 0 },
    { 1, 1, 0, 0, 0, 0, 1, 1, 0, 0 },
    { 1, 1, 0, 0, 0, 0, 1, 1, 0, 0 },
    { 1, 1, 0, 0, 0, 0, 1, 1, 0, 0 },
    { 1, 1, 0, 0, 0, 0, 1, 1, 0, 0 },
    { 1, 1, 0, 0, 0, 0, 1, 1, 0, 0 },
    { 1, 1, 0, 0, 0, 0, 1, 1, 0, 0 },
    { 1, 1, 0, 0, 0, 0, 1, 1, 0, 0 },
    { 0, 1, 1, 1, 1, 1, 1, 0, 0, 0 },
    { 0, 0, 1, 1, 1, 1, 0, 0, 0, 0 },
  },
  { 
    { 1, 1, 0, 0, 0, 0, 1, 1, 0, 0 },
    { 1, 1, 0, 0, 0, 0, 1, 1, 0, 0 },
    { 1, 1, 0, 0, 0, 0, 1, 1, 0, 0 },
    { 1, 1, 0, 0, 0, 0, 1, 1, 0, 0 },
    { 1, 1, 0, 0, 0, 0, 1, 1, 0, 0 },
    { 1, 1, 0, 0, 0, 0, 1, 1, 0, 0 },
    { 1, 1, 1, 0, 0, 1, 1, 1, 0, 0 },
    { 0, 1, 1, 0, 0, 1, 1, 0, 0, 0 },
    { 0, 0, 1, 1, 1, 1, 0, 0, 0, 0 },
    { 0, 0, 0, 1, 1, 0, 0, 0, 0, 0 },
  },
  { 
    { 1, 1, 0, 0, 0, 0, 1, 1, 0, 0 },
    { 1, 1, 0, 0, 0, 0, 1, 1, 0, 0 },
    { 1, 1, 0, 0, 0, 0, 1, 1, 0, 0 },
    { 1, 1, 0, 0, 0, 0, 1, 1, 0, 0 },
    { 1, 1, 0, 1, 1, 0, 1, 1, 0, 0 },
    { 1, 1, 0, 1, 1, 0, 1, 1, 0, 0 },
    { 1, 1, 1, 1, 1, 1, 1, 1, 0, 0 },
    { 1, 1, 1, 0, 0, 1, 1, 1, 0, 0 },
    { 1, 1, 0, 0, 0, 0, 1, 1, 0, 0 },
    { 1, 1, 0, 0, 0, 0, 1, 1, 0, 0 },
  },
  { 
    { 1, 0, 0, 0, 0, 0, 0, 1, 0, 0 },
    { 1, 1, 0, 0, 0, 0, 1, 1, 0, 0 },
    { 0, 1, 1, 0, 0, 1, 1, 0, 0, 0 },
    { 0, 0, 1, 1, 1, 1, 0, 0, 0, 0 },
    { 0, 0, 0, 1, 1, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 1, 1, 0, 0, 0, 0, 0 },
    { 0, 0, 1, 1, 1, 1, 0, 0, 0, 0 },
    { 0, 1, 1, 0, 0, 1, 1, 0, 0, 0 },
    { 1, 1, 0, 0, 0, 0, 1, 1, 0, 0 },
    { 1, 0, 0, 0, 0, 0, 0, 1, 0, 0 },
  },

  { 
    { 1, 1, 0, 0, 0, 0, 1, 1, 0, 0 },
    { 1, 1, 0, 0, 0, 0, 1, 1, 0, 0 },
    { 1, 1, 0, 0, 0, 0, 1, 1, 0, 0 },
    { 1, 1, 0, 0, 0, 0, 1, 1, 0, 0 },
    { 0, 1, 1, 0, 0, 1, 1, 0, 0, 0 },
    { 0, 0, 0, 1, 1, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 1, 1, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 1, 1, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 1, 1, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 1, 1, 0, 0, 0, 0, 0 },
  },
  { 
    { 1, 1, 1, 1, 1, 1, 1, 1, 0, 0 },
    { 1, 1, 1, 1, 1, 1, 1, 1, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 1, 1, 0, 0 },
    { 0, 0, 0, 0, 0, 1, 1, 0, 0, 0 },
    { 0, 0, 0, 0, 1, 1, 0, 0, 0, 0 },
    { 0, 0, 0, 1, 1, 0, 0, 0, 0, 0 },
    { 0, 0, 1, 1, 0, 0, 0, 0, 0, 0 },
    { 1, 1, 1, 0, 0, 0, 0, 0, 0, 0 },
    { 1, 1, 1, 1, 1, 1, 1, 1, 0, 0 },
    { 1, 1, 1, 1, 1, 1, 1, 1, 0, 0 },
  },
  {
    { 0, 1, 1, 0, 0, 0, 0, 0, 0, 0 },
    { 1, 1, 1, 0, 0, 0, 0, 0, 0, 0 },
    { 1, 1, 1, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 1, 1, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 1, 1, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 1, 1, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 1, 1, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 1, 1, 0, 0, 0, 0, 0, 0, 0 },
    { 1, 1, 1, 1, 0, 0, 0, 0, 0, 0 },
    { 1, 1, 1, 1, 0, 0, 0, 0, 0, 0 },
  },
  {
    { 0, 1, 1, 1, 1, 1, 0, 0, 0, 0 },
    { 1, 1, 1, 1, 1, 1, 1, 0, 0, 0 },
    { 1, 1, 1, 0, 0, 0, 1, 1, 0, 0 },
    { 0, 0, 0, 0, 0, 1, 1, 1, 0, 0 },
    { 0, 0, 0, 0, 1, 1, 1, 0, 0, 0 },
    { 0, 0, 0, 1, 1, 1, 0, 0, 0, 0 },
    { 0, 0, 1, 1, 1, 0, 0, 0, 0, 0 },
    { 1, 1, 1, 0, 0, 0, 0, 0, 0, 0 },
    { 1, 1, 1, 1, 1, 1, 1, 1, 0, 0 },
    { 1, 1, 1, 1, 1, 1, 1, 1, 0, 0 },
  },
  {
    { 1, 1, 1, 1, 1, 1, 1, 1, 0, 0 },
    { 1, 1, 1, 1, 1, 1, 1, 1, 0, 0 },
    { 0, 0, 0, 0, 0, 1, 1, 0, 0, 0 },
    { 0, 0, 0, 1, 1, 1, 1, 0, 0, 0 },
    { 0, 1, 1, 1, 1, 1, 0, 0, 0, 0 },
    { 0, 1, 1, 1, 1, 1, 1, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 1, 1, 0, 0, 0 },
    { 1, 1, 0, 0, 0, 0, 1, 1, 0, 0 },
    { 1, 1, 1, 1, 1, 1, 1, 1, 0, 0 },
    { 0, 1, 1, 1, 1, 1, 1, 0, 0, 0 },
  },
    
  {
    { 0, 0, 0, 0, 0, 1, 1, 0, 0, 0 },
    { 0, 0, 0, 0, 1, 1, 1, 0, 0, 0 },
    { 0, 0, 0, 1, 1, 0, 1, 0, 0, 0 },
    { 0, 0, 1, 1, 0, 0, 1, 0, 0, 0 },
    { 0, 1, 1, 0, 0, 0, 1, 0, 0, 0 },
    { 1, 1, 1, 1, 1, 1, 1, 1, 0, 0 },
    { 1, 1, 1, 1, 1, 1, 1, 1, 0, 0 },
    { 0, 0, 0, 0, 0, 1, 1, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 1, 1, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 1, 1, 0, 0, 0 },
  },
  {
    { 1, 1, 1, 1, 1, 1, 1, 1, 0, 0 },
    { 1, 1, 1, 1, 1, 1, 1, 1, 0, 0 },
    { 1, 1, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 1, 1, 1, 1, 1, 1, 1, 0, 0, 0 },
    { 0, 1, 0, 0, 0, 1, 1, 1, 0, 0 },
    { 0, 0, 0, 0, 0, 1, 1, 1, 0, 0 },
    { 0, 0, 0, 0, 0, 1, 1, 1, 0, 0 },
    { 1, 1, 0, 0, 0, 1, 1, 1, 0, 0 },
    { 1, 1, 1, 1, 1, 1, 1, 0, 0, 0 },
    { 0, 1, 1, 1, 1, 1, 1, 0, 0, 0 },
  },
  {
    { 0, 0, 0, 0, 0, 1, 1, 0, 0, 0 },
    { 0, 0, 0, 0, 1, 1, 1, 0, 0, 0 },
    { 0, 0, 1, 1, 1, 1, 0, 0, 0, 0 },
    { 0, 1, 1, 1, 0, 0, 0, 0, 0, 0 },
    { 1, 1, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 1, 1, 1, 1, 1, 1, 1, 0, 0, 0 },
    { 1, 1, 1, 0, 0, 0, 1, 1, 0, 0 },
    { 1, 1, 1, 0, 0, 0, 1, 1, 0, 0 },
    { 1, 1, 1, 0, 0, 0, 1, 1, 0, 0 },
    { 0, 1, 1, 1, 1, 1, 1, 0, 0, 0 },
  },
  {
    { 1, 1, 1, 1, 1, 1, 1, 1, 0, 0 },
    { 1, 1, 0, 0, 0, 1, 1, 1, 0, 0 },
    { 1, 1, 0, 0, 0, 1, 1, 0, 0, 0 },
    { 0, 0, 0, 0, 1, 1, 0, 0, 0, 0 },
    { 0, 0, 0, 1, 1, 0, 0, 0, 0, 0 },
    { 0, 0, 1, 1, 0, 0, 0, 0, 0, 0 },
    { 0, 1, 1, 1, 0, 0, 0, 0, 0, 0 },
    { 0, 1, 1, 1, 0, 0, 0, 0, 0, 0 },
    { 0, 1, 1, 1, 0, 0, 0, 0, 0, 0 },
    { 0, 1, 1, 1, 0, 0, 0, 0, 0, 0 },
  },
  {
    { 0, 1, 1, 1, 1, 1, 0, 0, 0, 0 },
    { 1, 1, 0, 0, 0, 1, 1, 0, 0, 0 },
    { 1, 1, 0, 0, 0, 1, 1, 0, 0, 0 },
    { 0, 1, 1, 0, 1, 1, 0, 0, 0, 0 },
    { 0, 0, 0, 1, 1, 0, 0, 0, 0, 0 },
    { 0, 0, 1, 1, 1, 0, 0, 0, 0, 0 },
    { 0, 1, 1, 0, 1, 1, 1, 0, 0, 0 },
    { 1, 1, 0, 0, 0, 1, 1, 0, 0, 0 },
    { 1, 1, 0, 0, 0, 1, 1, 0, 0, 0 },
    { 0, 1, 1, 1, 1, 1, 0, 0, 0, 0 },
  },
   
  {
    { 0, 1, 1, 1, 1, 1, 1, 0, 0, 0 },
    { 1, 1, 1, 1, 1, 1, 1, 0, 0, 0 },
    { 1, 1, 0, 0, 0, 0, 1, 1, 0, 0 },
    { 1, 1, 0, 0, 0, 0, 1, 1, 0, 0 },
    { 1, 1, 1, 1, 1, 1, 1, 1, 0, 0 },
    { 0, 1, 1, 1, 1, 1, 1, 1, 0, 0 },
    { 0, 0, 0, 0, 1, 1, 1, 1, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 1, 0, 0, 0 },
    { 0, 0, 0, 0, 1, 1, 1, 0, 0, 0 },
    { 0, 1, 1, 1, 1, 1, 1, 0, 0, 0 },
  },
  {
    { 0, 0, 1, 1, 1, 1, 0, 0, 0, 0 },
    { 0, 1, 1, 0, 0, 1, 1, 0, 0, 0 },
    { 1, 1, 0, 0, 0, 1, 1, 1, 0, 0 },
    { 1, 1, 0, 0, 1, 0, 1, 1, 0, 0 },
    { 1, 1, 0, 1, 0, 0, 1, 1, 0, 0 },
    { 1, 1, 1, 0, 0, 0, 1, 1, 0, 0 },
    { 1, 1, 0, 0, 0, 0, 1, 1, 0, 0 },
    { 1, 1, 0, 0, 0, 0, 1, 1, 0, 0 },
    { 0, 1, 1, 0, 0, 1, 1, 0, 0, 0 },
    { 0, 0, 1, 1, 1, 1, 1, 0, 0, 0 },
   },
  {
   { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
   { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
   { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
   { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
   { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
   { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
   { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
   { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
   { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
   { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
  }, 
  {
   { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
   { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
   { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
   { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
   { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
   { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
   { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
   { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
   { 1, 1, 0, 0, 0, 0, 0, 0, 0, 0 },
   { 1, 1, 0, 0, 0, 0, 0, 0, 0, 0 },
  }, 
  {
   { 1, 1, 0, 0, 0, 0, 0, 0, 0, 0 },
   { 1, 1, 0, 0, 0, 0, 0, 0, 0, 0 },
   { 1, 1, 0, 0, 0, 0, 0, 0, 0, 0 },
   { 1, 1, 0, 0, 0, 0, 0, 0, 0, 0 },
   { 1, 1, 0, 0, 0, 0, 0, 0, 0, 0 },
   { 1, 1, 0, 0, 0, 0, 0, 0, 0, 0 },
   { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
   { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
   { 1, 1, 0, 0, 0, 0, 0, 0, 0, 0 },
   { 1, 1, 0, 0, 0, 0, 0, 0, 0, 0 },
  },
  {
   { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
   { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
   { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
   { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
   { 1, 1, 1, 1, 1, 1, 0, 0, 0, 0 },
   { 1, 1, 1, 1, 1, 1, 0, 0, 0, 0 },
   { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
   { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
   { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
   { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
  },
  {
   { 0, 0, 1, 1, 0, 0, 1, 1, 0, 0 },
   { 0, 0, 1, 1, 0, 0, 1, 1, 0, 0 },
   { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
   { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
   { 0, 0, 1, 1, 0, 0, 1, 1, 0, 0 },
   { 0, 0, 1, 1, 0, 0, 1, 1, 0, 0 },
   { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
   { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
   { 0, 0, 1, 1, 0, 0, 1, 1, 0, 0 },
   { 0, 0, 1, 1, 0, 0, 1, 1, 0, 0 },
  },
  {
   { 0, 0, 1, 1, 1, 1, 0, 0, 0, 0 },
   { 1, 0, 0, 0, 0, 0, 1, 0, 0, 0 },
   { 1, 0, 1, 1, 1, 1, 0, 1, 0, 0 },
   { 1, 0, 1, 0, 0, 1, 0, 1, 0, 0 },
   { 1, 0, 1, 0, 0, 1, 0, 1, 0, 0 },
   { 1, 0, 1, 0, 0, 1, 0, 1, 0, 0 },
   { 1, 0, 1, 1, 1, 1, 1, 1, 0, 0 },
   { 1, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
   { 0, 1, 0, 0, 0, 0, 0, 0, 0, 0 },
   { 0, 0, 1, 1, 1, 1, 0, 0, 0, 0 },
  },
  {
   { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
   { 0, 1, 1, 0, 0, 0, 0, 1, 1, 0 },
   { 0, 1, 1, 0, 0, 0, 1, 1, 1, 0 },
   { 0, 0, 0, 0, 0, 1, 1, 1, 0, 0 },
   { 0, 0, 0, 0, 1, 1, 1, 0, 0, 0 },
   { 0, 0, 0, 1, 1, 1, 0, 0, 0, 0 },
   { 0, 0, 1, 1, 1, 0, 0, 1, 1, 0 },
   { 0, 1, 1, 1, 0, 0, 0, 1, 1, 0 },
   { 0, 1, 1, 0, 0, 0, 0, 0, 0, 0 },
   { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
  },
  {
    { 0, 0, 0, 0, 1, 1, 0, 0, 0, 0 },
    { 0, 1, 0, 0, 1, 1, 0, 0, 1, 0 },
    { 0, 0, 1, 0, 1, 1, 0, 1, 0, 0 },
    { 0, 0, 0, 1, 1, 1, 1, 0, 0, 0 },
    { 0, 1, 1, 1, 1, 1, 1, 1, 1, 0 },
    { 0, 1, 1, 1, 1, 1, 1, 1, 1, 0 },
    { 0, 0, 0, 1, 1, 1, 1, 0, 0, 0 },
    { 0, 0, 1, 0, 1, 1, 0, 1, 0, 0 },
    { 0, 1, 0, 0, 1, 1, 0, 0, 1, 0 },
    { 0, 0, 0, 0, 1, 1, 0, 0, 0, 0 },
  },
  {
    { 0, 0, 1, 1, 0, 0, 0, 0, 0, 0 },
    { 0, 1, 1, 0, 0, 0, 0, 0, 0, 0 },
    { 1, 1, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
  },
  {
    { 0, 0, 1, 1, 0, 1, 1, 0, 0, 0 },
    { 0, 1, 1, 0, 1, 1, 0, 0, 0, 0 },
    { 1, 1, 0, 1, 1, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
  },
  {
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 1, 1, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 1, 1, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 1, 1, 0, 0, 0, 0, 0 },
    { 0, 0, 1, 1, 0, 0, 0, 0, 0, 0 },
    { 0, 1, 1, 0, 0, 0, 0, 0, 0, 0 },
  },
  {
    { 0, 0, 0, 1, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 1, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 1, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 1, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 1, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 1, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 1, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 1, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 1, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 1, 0, 0, 0, 0, 0, 0 },
  },
  {
    { 0, 0, 0, 0, 0, 1, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 1, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 1, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 1, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 1, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 1, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 1, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 1, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 1, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 1, 0, 0, 0, 0 },
  },
  {
    { 0, 0, 0, 1, 1, 1, 0, 0, 0, 0 },
    { 0, 0, 1, 0, 0, 0, 1, 0, 0, 0 },
    { 0, 0, 1, 0, 0, 0, 1, 0, 0, 0 },
    { 0, 0, 0, 1, 0, 1, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 1, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 1, 0, 1, 0, 0, 0, 0 },
    { 0, 0, 1, 0, 0, 0, 1, 0, 1, 0 },
    { 0, 1, 0, 0, 0, 0, 0, 1, 0, 0 },
    { 0, 1, 0, 0, 0, 0, 0, 1, 1, 0 },
    { 0, 0, 1, 1, 0, 1, 1, 0, 0, 0 },
  },
  {
    { 0, 0, 0, 0, 1, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 1, 1, 1, 1, 0, 0, 0 },
    { 0, 0, 1, 0, 1, 0, 0, 1, 0, 0 },
    { 0, 0, 1, 0, 1, 0, 0, 0, 0, 0 },
    { 0, 0, 1, 0, 1, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 1, 1, 1, 1, 0, 0, 0 },
    { 0, 0, 0, 0, 1, 0, 0, 1, 0, 0 },
    { 0, 0, 1, 0, 1, 0, 0, 1, 0, 0 },
    { 0, 0, 0, 1, 1, 1, 1, 0, 0, 0 },
    { 0, 0, 0, 0, 1, 0, 0, 0, 0, 0 },
  },
  {
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 1, 1, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 1, 1, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 1, 1, 0, 0, 0, 0 },
    { 0, 1, 1, 1, 1, 1, 1, 1, 1, 0 },
    { 0, 1, 1, 1, 1, 1, 1, 1, 1, 0 },
    { 0, 0, 0, 0, 1, 1, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 1, 1, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 1, 1, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
  },
  {
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 1, 1, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 1, 1, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 1, 1, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 1, 1, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
  }
};

boolean imageNumsFont[FONTSIZE][10][50] = {
  {
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 1, 1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 1, 0, 0, 0, 0, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 1, 1, 0, 1, 1, 0, 1, 1, 1, 1, 0, 1, 1, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 1, 1, 1, 1, 1, 1, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
  },
  {
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0 },
  },
  {
    { 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
  }
};
