myCanvas.width=window.innerWidth;
myCanvas.height=window.innerHeight;

const A = { x: 200, y: 150 };
const B = { x: 150, y: 550 };
const C = { x: 50, y: 100 };
const D = { x: 250, y: 200 };

const ctx=myCanvas.getContext("2d");
ctx.beginPath();
ctx.moveTo(A.x,A.y);
ctx.lineTo(B.x,B.y);
ctx.moveTo(C.x,C.y);
ctx.lineTo(D.x,D.y);
ctx.stroke();