package test.test;

import android.app.Activity;
import android.os.Bundle;
import android.widget.TextView;

public class test extends Activity
{

    /** Called when the activity is first created. */
    @Override
    public void onCreate(Bundle savedInstanceState)
    {
        super.onCreate(savedInstanceState);

        TextView  tv = new TextView(this);
        String s = stringFromJNI();

        tv.setText(s);
        setContentView(tv);
    }

    public native String  stringFromJNI();

    static {
        System.loadLibrary("test");
    }
}
