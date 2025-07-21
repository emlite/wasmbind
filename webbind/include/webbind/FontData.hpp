#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class Blob;


class FontData : public emlite::Val {
    explicit FontData(Handle h) noexcept;

public:
    explicit FontData(const emlite::Val &val) noexcept;
    static FontData take_ownership(Handle h) noexcept;

    FontData clone() const noexcept;
    jsbind::Promise<Blob> blob();
    jsbind::USVString postscriptName() const;
    jsbind::USVString fullName() const;
    jsbind::USVString family() const;
    jsbind::USVString style() const;
};

