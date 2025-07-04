#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Blob.hpp"
#include "enums.hpp"


class File : public Blob {
    explicit File(Handle h) noexcept;

public:
    explicit File(const emlite::Val &val) noexcept;
    static File take_ownership(Handle h) noexcept;

    File clone() const noexcept;
    File(const jsbind::Sequence<jsbind::Any>& fileBits, const jsbind::USVString& fileName, const jsbind::Any& options);
    jsbind::DOMString name() const;
    long long lastModified() const;
    jsbind::USVString webkitRelativePath() const;
};

