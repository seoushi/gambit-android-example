/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */

package org.seanchapel.gambittest;

import android.app.Activity;
import android.os.Bundle;
import android.util.Log;
import android.widget.TextView;

/**
 *
 * @author SChapel
 */
public class MainActivity extends Activity
{

    /** Called when the activity is first created. */
    @Override
    public void onCreate(Bundle savedInstanceState)
		{
        super.onCreate(savedInstanceState);

				initGambit();


				TextView  tv = new TextView(this);
				String fib = testFib();
				String ls = testPorts();

        tv.setText(fib + "\n" + ls);
        setContentView(tv);
    }

		public native String testFib();

		public native void initGambit();

		public native String testPorts();

		static
		{
			System.loadLibrary("gambit");
		}

}