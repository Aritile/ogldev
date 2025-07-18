/*

        Copyright 2011 Etay Meiri

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

#pragma once

#include "technique.h"
#include "ogldev_math_3d.h"
#include "ogldev_material.h"
#include "ogldev_world_transform.h"
#include "demolition_lights.h"
#include "Int/core_model.h"
#include "GL/gl_base_lighting_technique.h"

class PBRForwardLightingTechnique : public BaseLightingTechnique
{
public:

    PBRForwardLightingTechnique();

    virtual bool Init();

    void SetAmbientOcclusionTextureUnit(int TextureUnit);

    void SetEmissiveTextureUnit(int TextureUnit);

    void SetAlbedoTextureUnit(int TextureUnit);

    void SetRoughnessTextureUnit(int TextureUnit);    

    void SetNormalTextureUnit(int TextureUnit);

    void SetEnvmapTextureUnit(int TextureUnit);

    void SetBRDF_LUTTextureUnit(int TextureUnit);

    void SetIrradianceTextureUnit(int TextureUnit);

private:
    GLuint m_aoUnitLoc = INVALID_UNIFORM_LOCATION;
    GLuint m_emissiveUnitLoc = INVALID_UNIFORM_LOCATION;
    GLuint m_albedoUnitLoc = INVALID_UNIFORM_LOCATION;
    GLuint m_roughnessUnitLoc = INVALID_UNIFORM_LOCATION;
    GLuint m_normalUnitLoc = INVALID_UNIFORM_LOCATION;
    GLuint m_envmapUnitLoc = INVALID_UNIFORM_LOCATION;
    GLuint m_brdfLUTUnitLoc = INVALID_UNIFORM_LOCATION;
    GLuint m_irradianceUnitLoc = INVALID_UNIFORM_LOCATION;
};

