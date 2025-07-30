#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class MimeType;


class MimeTypeArray : public emlite::Val {
    explicit MimeTypeArray(Handle h) noexcept;

public:
    explicit MimeTypeArray(const emlite::Val &val) noexcept;
    static MimeTypeArray take_ownership(Handle h) noexcept;

    MimeTypeArray clone() const noexcept;
    unsigned long length() const;
    MimeType item(unsigned long index);
    MimeType namedItem(const jsbind::String& name);
};

