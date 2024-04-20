cmake_minimum_required(VERSION 3.29.2)
project(Order_Matching_Engine)

# # Set the directory containing the nlohmann library
# set(nlohmann_DIR "/Users/LoganDeboo/Documents/VCPKG/vcpkg/installed/arm64-osx/include")

# # Find the nlohmann library
# find_package(nlohmann 3.11.3 REQUIRED)

# # Add your executable

# # Link the nlohmann library to your executable
# target_link_libraries(Order_Matching_Engine PRIVATE nlohmann_json::nlohmann_json)
set(JSON_BuildTests OFF CACHE INTERNAL "")
add_subdirectory(lib/json)

add_executable(Order_Matching_Engine
    src/main.cpp
    src/MarketParticipant.cpp
    src/Order.cpp
    src/ExchangeSettings.cpp)

target_link_libraries(Order_Matching_Engine PRIVATE nlohmann_json::nlohmann_json)