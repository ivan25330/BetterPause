cmake_minimum_required(VERSION 3.27.9)

project(better_pause VERSION 1.0.0)

# Setup Geode
find_package(Geode REQUIRED)

# Setup the mod
setup_geode_mod(
    better_pause
    SRC
    "src/main.cpp"
)
