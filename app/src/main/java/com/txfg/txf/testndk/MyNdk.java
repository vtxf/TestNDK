package com.txfg.txf.testndk;

/**
 * Created by txf on 16-7-27.
 */
public class MyNdk {
    static {
        System.loadLibrary("MyLibrary");
    }

    public native String getString();
}
