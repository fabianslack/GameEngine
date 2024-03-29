#pragma once
#include <string>
class Texture
{
private:
	unsigned int _rendererID;
	std::string _filePath;
	unsigned char* _localBuffer;
	int _width, _height, _bpp;
public: 
	Texture(const std::string& path);
	~Texture();

	void bind(const int slot = 0) const;
	void unbind() const;
	inline int getWidth() const { return _width; };
	inline int getHeight() const { return _height; };
};

