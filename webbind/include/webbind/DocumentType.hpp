#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "Node.hpp"

namespace webbind {

/// Interface DocumentType
/// [`DocumentType`](https://developer.mozilla.org/en-US/docs/Web/API/DocumentType)
class DocumentType : public Node {
    explicit DocumentType(Handle h) noexcept;
public:
    explicit DocumentType(const emlite::Val &val) noexcept;
    static DocumentType take_ownership(Handle h) noexcept;
    [[nodiscard]] DocumentType clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`DocumentType.name`](https://developer.mozilla.org/en-US/docs/Web/API/DocumentType/name)
    /// [`DocumentType.name`](https://developer.mozilla.org/en-US/docs/Web/API/DocumentType/name)
    [[nodiscard]] jsbind::String name() const;
    /// [`DocumentType.publicId`](https://developer.mozilla.org/en-US/docs/Web/API/DocumentType/publicId)
    /// [`DocumentType.publicId`](https://developer.mozilla.org/en-US/docs/Web/API/DocumentType/publicId)
    [[nodiscard]] jsbind::String publicId() const;
    /// [`DocumentType.systemId`](https://developer.mozilla.org/en-US/docs/Web/API/DocumentType/systemId)
    /// [`DocumentType.systemId`](https://developer.mozilla.org/en-US/docs/Web/API/DocumentType/systemId)
    [[nodiscard]] jsbind::String systemId() const;
    /// The before method.
    /// [`DocumentType.before`](https://developer.mozilla.org/en-US/docs/Web/API/DocumentType/before)
    jsbind::Undefined before(const jsbind::Any& nodes);
    /// The after method.
    /// [`DocumentType.after`](https://developer.mozilla.org/en-US/docs/Web/API/DocumentType/after)
    jsbind::Undefined after(const jsbind::Any& nodes);
    /// The replaceWith method.
    /// [`DocumentType.replaceWith`](https://developer.mozilla.org/en-US/docs/Web/API/DocumentType/replaceWith)
    jsbind::Undefined replaceWith(const jsbind::Any& nodes);
    /// The remove method.
    /// [`DocumentType.remove`](https://developer.mozilla.org/en-US/docs/Web/API/DocumentType/remove)
    jsbind::Undefined remove();
};

} // namespace webbind