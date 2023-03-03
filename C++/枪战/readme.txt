需求：
    士兵 许三多有一把枪，AK47
    士兵可以开火
    士兵可以给枪装填子弹
    枪能够发射子弹
    枪能够装填子弹--增加子弹数量

开发：
    Solider:
        string_name;
        Gun*_ptr_ugn;   //士兵要包含枪类指针，先设计枪类

        Solider(string name)
        addBullerToGun(int num)
        fire()

    Gun
        string_type
        Int_bullet_count;

        Gun(string type)
        addBullet(int num)
        shoot()
