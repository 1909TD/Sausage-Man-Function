#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H
//made by ThanhDark1909 7/24//2024
class GameData {
public:
    static void* GetLocalRoleLogic() {
        static void* method = Il2CppGetMethodOffset("Assembly-CSharp.dll", "", "GameData", "get_LocalRoleLogic", 0);
        if (!method) return nullptr;

        typedef void* (*Fn)();
        return ((Fn)method)();
    }
};

class Role {
private:
    void* instance;
public:
    Role(void* inst) : instance(inst) {}

    Vector3 GetTransformHeadPoint() {
        static void* method = Il2CppGetMethodOffset("Assembly-CSharp.dll", "", "Role", "GetTransformHeadPoint", 0);
        if (!method) return { 0, 0, 0 };

        typedef Vector3(*Fn)(void*);
        return ((Fn)method)(instance);
    }
};

class RoleLogic {
private:
    void* instance;
public:
    RoleLogic(void* inst) : instance(inst) {}

    float GetHp() {
        static size_t offset = Il2CppGetFieldOffset("Assembly-CSharp.dll", "", "RoleLogic", "hp");
        return *(float*)((uintptr_t)instance + offset);
    }

    float GetMaxHp() {
        static size_t offset = Il2CppGetFieldOffset("Assembly-CSharp.dll", "", "RoleLogic", "maxHp");
        return *(float*)((uintptr_t)instance + offset);
    }

    Role GetMyRole() {
        static void* method = Il2CppGetMethodOffset("Assembly-CSharp.dll", "", "RoleLogic", "get_MyRole", 0);
        if (!method) return Role(nullptr);

        typedef void* (*Fn)(void*);
        return Role(((Fn)method)(instance));
    }

    void* GetMyStartGame() {
        static void* method = Il2CppGetMethodOffset("Assembly-CSharp.dll", "", "RoleLogic", "get_MyStartGame", 0);
        if (!method) return nullptr;

        typedef void* (*Fn)(void*);
        return ((Fn)method)(instance);
    }

    void* GetInstance() {
        return instance;
    }
};

class StartGame {
private:
    void* instance;
public:
    StartGame(void* inst) : instance(inst) {}

    List<void**>* GetRoleList() {
        static size_t offset = 0x50;
        return *(List<void**>**)((uintptr_t)instance + offset);
    }

    void* GetInstance() {
        return instance;
    }
};



#endif // FUNCTION_POINTERS_H 
