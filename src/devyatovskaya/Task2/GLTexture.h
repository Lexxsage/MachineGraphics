#pragma once
#include <QOpenGLTexture>
#include <string>
#include <memory>

struct GLTexture {
  std::string type;
  std::string path;
  std::shared_ptr<QOpenGLTexture> texture_data;
};