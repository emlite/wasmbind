#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "XMLHttpRequestEventTarget.hpp"
#include "enums.hpp"


class XMLHttpRequestUpload : public XMLHttpRequestEventTarget {
    explicit XMLHttpRequestUpload(Handle h) noexcept;

public:
    explicit XMLHttpRequestUpload(const emlite::Val &val) noexcept;
    static XMLHttpRequestUpload take_ownership(Handle h) noexcept;

    XMLHttpRequestUpload clone() const noexcept;
};

