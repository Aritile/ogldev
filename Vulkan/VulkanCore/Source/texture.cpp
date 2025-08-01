/*

		Copyright 2025 Etay Meiri

	This program is free software: you can redistribute it and/or modify
	it under the terms of the GNU General Public License as published by
	the Free Software Foundation, either version 3 of the License, or
	(at your option) any later version.

	This program is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
	GNU General Public License for more details.

	You should have received a copy of the GNU General Public License
	along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include <string>
#include <assert.h>

#include <vulkan/vulkan.h>

#include "ogldev_vulkan_core.h"
#include "ogldev_vulkan_texture.h"
#include "3rdparty/stb_image.h"
#include "3rdparty/stb_image_write.h"


namespace OgldevVK {

void VulkanTexture::Load(unsigned int BufferSize, void* pData, bool IsRGB)
{
	assert(m_pVulkanCore);

	void* pImageData = stbi_load_from_memory((const stbi_uc*)pData, BufferSize, &m_imageWidth, &m_imageHeight, &m_imageBPP, 0);

	m_pVulkanCore->CreateTextureFromData(pImageData, m_imageWidth, m_imageHeight, *this);
}


void VulkanTexture::Load(const std::string& Filename, bool IsRGB)
{
	m_pVulkanCore->CreateTexture(Filename.c_str(), *this);
}

}