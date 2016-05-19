project(STEF)
cmake_minimum_required(VERSION 2.8.4)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/build")

#########################################################
# Copy graph and alpha data to the build directory
#########################################################
file(GLOB GRAPH_DATA
        "data/*.txt"
     )
file(COPY ${GRAPH_DATA} DESTINATION ${CMAKE_RUNTIME_OUTPUT_DIRECTORY})

#########################################################
# FIND GLUT
#########################################################
find_package(GLUT REQUIRED)
include_directories(${GLUT_INCLUDE_DIRS})
link_directories(${GLUT_LIBRARY_DIRS})
add_definitions(${GLUT_DEFINITIONS})
if(NOT GLUT_FOUND)
    message(ERROR " GLUT not found!")
endif(NOT GLUT_FOUND)

#########################################################
# FIND OPENGL
#########################################################
find_package(OpenGL REQUIRED)
include_directories(${OpenGL_INCLUDE_DIRS})
link_directories(${OpenGL_LIBRARY_DIRS})
add_definitions(${OpenGL_DEFINITIONS})
if(NOT OPENGL_FOUND)
    message(ERROR " OPENGL not found!")
endif(NOT OPENGL_FOUND)

#########################################################
# FIND OpenCV
#########################################################
find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})


#########################################################
# Include Files
#########################################################
add_executable(${PROJECT_NAME}
        include/MedidasBase.h
        Animacao.cpp Animacao.h
        Antropometria.cpp Antropometria.h
        Desenha.cpp Desenha.h
        Entrada.cpp Entrada.h
        Face.cpp Face.h
        Grafo.cpp Grafo.h
        Medidas.cpp Medidas.h
        MedidasBase.h
        MedidasFactory.cpp MedidasFactory.h
        Movimentos.cpp Movimentos.h
        No.cpp No.h
        Parametrizacao.cpp Parametrizacao.h
        RafaMedidas.cpp RafaMedidas.h
        Saida.cpp Saida.h
        TesteMedidas.cpp TesteMedidas.h
        main.cpp
        )
########################################################
# Linking & stuff
#########################################################
target_link_libraries(${PROJECT_NAME} ${OPENGL_LIBRARIES} ${GLUT_LIBRARY} ${OpenCV_LIBS})
