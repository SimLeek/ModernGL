#pragma once

struct UniformBuffer {
	PyObject_HEAD
	int ubo;
	int size;
};

extern PyTypeObject UniformBufferType;

PyObject * CreateUniformBufferType(int ubo, int size);
