function numericonly()
{
    if(!event.keyCode >=48 && event.keyCode<=57))
event.returnValue=false;
}
function countWords()
{
    var message = document.getElementByID(‘txtMessage’).value;
    message= message.replace(/\s+/g, ‘ ‘);
    var numberOfWords = message.split(‘ ‘).length;
    document.getElementById(‘txtTrack’).value = words Remaining:
    ‘ +
    eval(50 - numberOfWords);
    if(numberOfWords > 50)
        alert(“too many words.’);
}
