interface Camera
{
    void takePhoto();
    void takeVideo();

}

interface MusicPlayer
{
    void playSong();
    void pauseSong();

    // when interfaces are created earlier but later we will to change or add some methods then we don't want that we add that new method everywhere so it is done here only by defining and declaring with 'default' keyword
    default void changeSong()
    {
        System.out.println("song changed successfully.....");
    }
}

class CellPhone
{
    void call()
    {
        System.out.println("Ringing.... calling......");
    }
}

class SmartPhone extends CellPhone implements MusicPlayer, Camera
{
    public void takePhoto()
    {
        System.out.println("your photo taken.....");
    }
    public void takeVideo()
    {
        System.out.println("your video is taken........");
    }
    public void playSong()
    {
        System.out.println("song played");
    }
    public void pauseSong()
    {
        System.out.println("song paused");
    }
}

public class InterfacesDefaultMethods
{
    public static void main(String[] args)
    {
        SmartPhone s1 = new SmartPhone();
        s1.takePhoto();
        s1.takeVideo();
        s1.playSong();
        s1.pauseSong();
        s1.changeSong();
    }
}