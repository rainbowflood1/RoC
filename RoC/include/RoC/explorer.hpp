#include <RoC/requests.hpp>
#include <string>
#define PRINTER(name) printer(#name, (name))

class Path {
public:
    const char *path_char = "";
    void path(const char *path) {
        this->path_char = path;
    }
};

void create_script(int func(), const char* name) {

}

namespace game {
    namespace Workspace {
        Path path() {
            Path path;
            std::string path_str = "game.";
            path.path((path_str + "Workspace").c_str());
            return path;
        }
    }
    namespace Lighting {
        Path path() {
            Path path;
            std::string path_str = "game.";
            path.path((path_str + "Lighting").c_str());
            return path;
        }
    }
    namespace SoundService {
        Path path() {
            Path path;
            std::string path_str = "game.";
            path.path((path_str + "SoundService").c_str());
            return path;
        }
    }
    namespace Players {
        Path path() {
            Path path;
            std::string path_str = "game.";
            path.path((path_str + "Players").c_str());
            return path;
        }
    }
    namespace MaterialService {
        Path path() {
            Path path;
            std::string path_str = "game.";
            path.path((path_str + "MaterialService").c_str());
            return path;
        }
    }
    namespace TextChatService {
        Path path() {
            Path path;
            std::string path_str = "game.";
            path.path((path_str + "TextChatService").c_str());
            return path;
        }
    }
    namespace Teams {
        Path path() {
            Path path;
            std::string path_str = "game.";
            path.path((path_str + "Teams").c_str());
            return path;
        }
    }
    namespace ServerStorage {
        Path path() {
            Path path;
            std::string path_str = "game.";
            path.path((path_str + "ServerStorage").c_str());
            return path;
        }
    }
    namespace ServerScriptService {
        Path path() {
            Path path;
            std::string path_str = "game.";
            path.path((path_str + "ServerScriptService").c_str());
            return path;
        }
    }
    namespace StarterGui {
        Path path() {
            Path path;
            std::string path_str = "game.";
            path.path((path_str + "StarterGui").c_str());
            return path;
        }
    }
    namespace NetworkClient {
        Path path() {
            Path path;
            std::string path_str = "game.";
            path.path((path_str + "NetworkClient").c_str());
            return path;
        }
    }
    namespace ReplicatedFirst {
        Path path() {
            Path path;
            std::string path_str = "game.";
            path.path((path_str + "ReplicatedFirst").c_str());
            return path;
        }
    }
    namespace ReplicatedStorage {
        Path path() {
            Path path;
            std::string path_str = "game.";
            path.path((path_str + "ReplicatedStorage").c_str());
            return path;
        }
    }
    namespace StarterPack {
        Path path() {
            Path path;
            std::string path_str = "game.";
            path.path((path_str + "StarterPack").c_str());
            return path;
        }
    }
    namespace StarterPlayer {
        Path path() {
            Path path;
            std::string path_str = "game.";
            path.path((path_str + "StarterPlayer").c_str());
            return path;
        }
    }


}
