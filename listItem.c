<LinearLayout xmlns:android="http://schemas.android.com/apk/res/android"
    android:layout_width="match_parent"
    android:layout_height="match_parent"
    android:background="#FFFFFF"
    android:orientation="vertical" >

    <LinearLayout
        android:layout_width="match_parent"
        android:layout_height="wrap_content"
        android:orientation="horizontal" >

        <LinearLayout
            android:layout_width="0dp"
            android:layout_height="wrap_content"
            android:layout_weight="1"
            android:orientation="vertical" >

            <TextView
                android:id="@+id/nameText"
                android:layout_width="wrap_content"
                android:layout_height="wrap_content"
                android:textColor="#228B22" />

            <TextView
                android:id="@+id/ageText"
                android:layout_width="wrap_content"
                android:layout_height="wrap_content"
                android:textColor="#228B22" />
        </LinearLayout>

        <Button
            android:id="@+id/edit"
            android:layout_width="wrap_content"
            android:layout_height="wrap_content"
            android:layout_margin="2dp"
            android:background="@drawable/buttoncolor"
            android:paddingLeft="5dp"
            android:paddingRight="5dp"
            android:text="Edit"
            android:textColor="#FFFFFF" />

        <Button
            android:id="@+id/delete"
            android:layout_width="wrap_content"
            android:layout_height="wrap_content"
            android:layout_margin="2dp"
            android:background="@drawable/buttoncolor"
            android:paddingLeft="5dp"
            android:paddingRight="5dp"
            android:text="Delete"
            android:textColor="#FFFFFF" />
    </LinearLayout>


</LinearLayout>
