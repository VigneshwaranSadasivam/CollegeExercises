    #include<stdio.h>
    void main(){
    FILE *fp;
    char c;
    int words=0,characters=0,lines=0;
    fp=fopen("/Users/ganesankoundappan/Desktop/C-Exercises/ClassExercises/fireworks.txt","r");
    while((c=fgetc(fp))!=EOF){
    printf("%c",c);
    if(c==' '){
        words++;
    }
    if(c=='\n'){
        lines++;
    }
    if(c!=' '&&c!='\n'){
        characters++;
    }
    }
    printf("\ncharacters : %d\nwords : %d\nlines : %d",characters,words,lines);
    fclose(fp);
    }
/*
Output:

Do you ever feel like a plastic bag
Drifting thought the wind
Wanting to start again
Do you ever feel, feel so paper thin
Like a house of cards
One blow from caving in
Do you ever feel already buried deep
Six feet under scream
But no one seems to hear a thing
Do you know that there's still a chance for you
'Cause there's a spark in you
You just gotta ignite the light
And let it shine
Just own the night
Like the Fourth of July
'Cause baby you're a firework
Come on show 'em what your worth
Make 'em go "Oh, oh, oh!"
As you shoot across the sky-y-y
Baby you're a firework
Come on let your colors burst
Make 'em go "Oh, oh, oh!"
You're gonna leave 'em fallin' down down down
You don't have to feel like a waste of space
You're original, cannot be replaced
If you only knew what the future holds
After a hurricane comes a rainbow
Maybe a reason why all the doors are closed
So you can open one that leads you to the perfect road
Like a lightning bolt, your heart will glow
And when it's time, you'll know
You just gotta ignite the light
And let it shine
Just own the night
Like the Fourth of July
'Cause baby you're a firework
Come on show 'em what your worth
Make 'em go "Oh, oh, oh!"
As you shoot across the sky-y-y
Baby you're a firework
Come on let your colors burst
Make 'em go "Oh, oh, oh!"
You're gonna leave 'em fallin' down down down
Boom, boom, boom
Even brighter than the moon, moon, moon
It's always been inside of you, you, you
And now it's time to let it through
'Cause baby you're a firework
Come on show 'em what your worth
Make 'em go "Oh, oh, oh!"
As you shoot across the sky-y-y
Baby you're a firework
Come on let your colors burst
Make 'em go "Oh, oh, oh!"
You're gonna leave 'em fallin' down down down
Boom, boom, boom
Even brighter than the moon, moon, moon
Boom, boom, boom
Even brighter than the moon, moon, moon

characters : 1476
words : 302
lines : 59

*/