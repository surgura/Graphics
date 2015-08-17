/// This Source Code Form is subject to the terms of the Mozilla Public
/// License, v. 2.0. If a copy of the MPL was not distributed with this
/// file, You can obtain one at http://mozilla.org/MPL/2.0/.

/// @author Aart Stuurman

#ifndef GRPH_TEXTURE_GETTER_H
#define GRPH_TEXTURE_GETTER_H

#include "Texture.h"

/// Provides functions for getting texture
typedef struct
{
    /// User provided data that is passed to all functions
    void* userData;

    /// Get a texture       Function to get a texture
    /// @param  userData    The user data contained in this object
    /// @param  fileName    The file name for the texture
    /// @return             The texture that was wanted to get
    Texture* (*getTexture) (void* userData, const char* fileName);
} Grph_TextureGetter;

/// Construct a texture getter
/// @param  textureGetter   The texture getter to construct
/// @param  userData        The user data passed to all functions of this texture getter
/// @param  getTexture      Function to get a texture
    /// @param  userData    The user data contained in this object
    /// @param  fileName    The file name for the texture
    /// @return             The texture that was wanted to get
void Grph_TextureGetter_Construct(Grph_TextureGetter* textureGetter, void* userData,
    Texture* (*getTexture) (void* userData, const char* fileName));

#endif // GRPH_TEXTURE_GETTER_H
