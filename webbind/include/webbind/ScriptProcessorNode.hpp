#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "AudioNode.hpp"

namespace webbind {

/// Interface ScriptProcessorNode
/// [`ScriptProcessorNode`](https://developer.mozilla.org/en-US/docs/Web/API/ScriptProcessorNode)
class ScriptProcessorNode : public AudioNode {
    explicit ScriptProcessorNode(Handle h) noexcept;
public:
    explicit ScriptProcessorNode(const emlite::Val &val) noexcept;
    static ScriptProcessorNode take_ownership(Handle h) noexcept;
    [[nodiscard]] ScriptProcessorNode clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`ScriptProcessorNode.onaudioprocess`](https://developer.mozilla.org/en-US/docs/Web/API/ScriptProcessorNode/onaudioprocess)
    /// [`ScriptProcessorNode.onaudioprocess`](https://developer.mozilla.org/en-US/docs/Web/API/ScriptProcessorNode/onaudioprocess)
    [[nodiscard]] jsbind::Any onaudioprocess() const;
    /// Setter of the `onaudioprocess` attribute.
    /// [`ScriptProcessorNode.onaudioprocess`](https://developer.mozilla.org/en-US/docs/Web/API/ScriptProcessorNode/onaudioprocess)
    void onaudioprocess(const jsbind::Any& value);
    /// [`ScriptProcessorNode.bufferSize`](https://developer.mozilla.org/en-US/docs/Web/API/ScriptProcessorNode/bufferSize)
    /// [`ScriptProcessorNode.bufferSize`](https://developer.mozilla.org/en-US/docs/Web/API/ScriptProcessorNode/bufferSize)
    [[nodiscard]] long bufferSize() const;
};

} // namespace webbind