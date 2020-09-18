package com.company;

public class TestModel {
    TestModel myTestModel;
    public TestModel(int count)
    {
        count--;
        if (count > 0)
        {
            myTestModel = new TestModel(count);
        }
    }
}
