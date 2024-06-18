#include <GLFW/glfw3.h>
  extern "C" {
#include <leif/leif.h>
  }

const int win_width = 1920;
const int win_height = 1080;
int main() {
  glfwInit();
  GLFWwindow* window = glfwCreateWindow(win_width, win_height, "todo", NULL, NULL);
  glfwMakeContextCurrent(window);

  // initialize leif
  lf_init_glfw(win_width, win_height, window);

  while(!glfwWindowShouldClose(window)) {
    glClear(GL_COLOR_BUFFER_BIT);
    glClearColor(0.1f, 0.1f, 0.1f, 1.0f);

    //leif instance
    lf_begin();
    lf_text("Hello World!");
    lf_end();

    glfwPollEvents();
    glfwSwapBuffers(window);
  }

  lf_terminate();
  glfwDestroyWindow(window);
  glfwTerminate();
  return 0;
}

/*
  TODO
 - [ ] clone leif library
 - [ ] build install
 - [ ] rm cloned directory
 - [ ] include in project
 - [ ] make github repo
 - [ ] push to github

 */
