package apps.sandeep.com.ndktestapp1;

import android.app.Activity;
import android.os.Bundle;
import android.widget.TextView;


public class MainActivity extends Activity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.content_main);
        TextView mTextView = (TextView) findViewById(R.id.hello);
        mTextView.setText(helloJni());
    }


    public native String  helloJni();

    static {
        System.loadLibrary("hello-jni");
    }
}
