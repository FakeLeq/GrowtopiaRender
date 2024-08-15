if EXIST "build" (
    rmdir /S /Q "build"
)

mkdir "build"
cd "build"

cmake .. -DCMAKE_BUILD_TYPE=Debug
cmake --build .

pause