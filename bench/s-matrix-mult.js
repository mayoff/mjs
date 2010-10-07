load("sylvester.js");

var m1 = $M([[Math.random() * 1000, Math.random() * 1000, Math.random() * 1000, Math.random() * 1000],
	     [Math.random() * 1000, Math.random() * 1000, Math.random() * 1000, Math.random() * 1000],
	     [Math.random() * 1000, Math.random() * 1000, Math.random() * 1000, Math.random() * 1000],
	     [Math.random() * 1000, Math.random() * 1000, Math.random() * 1000, Math.random() * 1000]]);
var m2 = $M([[Math.random() * 1000, Math.random() * 1000, Math.random() * 1000, Math.random() * 1000],
	     [Math.random() * 1000, Math.random() * 1000, Math.random() * 1000, Math.random() * 1000],
	     [Math.random() * 1000, Math.random() * 1000, Math.random() * 1000, Math.random() * 1000],
	     [Math.random() * 1000, Math.random() * 1000, Math.random() * 1000, Math.random() * 1000]]);

var t0 = Date.now();
for (var i = 0; i < 1000000; ++i) {
    m3 = m1.x(m2);

    tmp = m3;
    m3 = m2;
    m2 = m1;
    m1 = tmp;
}
var t1 = Date.now();

print ("1000000 muls: " + (t1-t0) + " ms\n");
