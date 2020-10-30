//  printing 1 to N, N to 1 and factorial of N using recursion

//  printing 1 to N using

const oneToN = (n) => {
  if (n == 1) {
    console.log(n);
    return;
  }
  oneToN(n - 1);
  console.log(n);
};

//  printing N to 1 using recursion

const nToOne = (n) => {
  if (n == 1) {
    console.log(n);
    return;
  }
  console.log(n);
  nToOne(n - 1);
};

oneToN(4);
nToOne(4);
