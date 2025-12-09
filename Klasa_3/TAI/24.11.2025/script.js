var a1=prompt("Podaj a1")
var a2=prompt("Podaj a2")
var b1=prompt("Podaj b1")
var b2=prompt("Podaj b2")
var c1=prompt("Podaj c1")
var c2=prompt("Podaj c2")

if ((isNaN(a1))||(isNaN(a2))||(isNaN(b1))||(isNaN(b2))||(isNaN(c1))||(isNaN(c2))) {
    document.write("<font color='red' size='20'> Podałeś napis! </font><br>")
}
else {
    var W=a1*b2-a2*b1
    var Wx=c1*b2-c2*b1
    var Wy=a1*c1-a2*c1

    if (W!=0) {
        x=Wx/W
        y=Wy/W
        document.write("<font color='darkgreen' size='10'> x="+x+"; y="+y+" </font><br>")
    }//para liczb

    else {
        if (Wx==0) {
            if (Wy==0) {
                document.write("<font color='green' size='10'> Nieskończenie wiele rozwiązań </font><br>")
            }//wy rowne 0
            else {
                document.write("<font color='grass' size='10'> Brak rozwiązań </font><br>")
            }//else wy rowne 0  
        }//wx rowne 0
        else {
            document.write("<font color='grass' size='10'> Brak rozwiązań </font><br>")
        }//else wx rowne 0
    }//else para liczb
}//else od isNaN

