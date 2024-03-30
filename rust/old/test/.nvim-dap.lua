-- require https://romangeber.com/blog/tech/nvim_rust_debugger
local dap = require "dap"

dap.adapters.lldb = {
  type = "executable",
  command = "/usr/bin/lldb-vscode", -- adjust as needed
  name = "lldb",
}

dap.configurations.rust = {
  {
    name = "hello-world",
    type = "lldb",
    request = "launch",
    program = function() return vim.fn.getcwd() .. "/tuples" end,
    cwd = "${workspaceFolder}",
    stopOnEntry = false,
  }
  --   {
  --     name = "hello-dap",
  --     type = "lldb",
  --     request = "launch",
  --     program = function() return vim.fn.getcwd() .. "/target/debug/hello-dap" end,
  --     cwd = "${workspaceFolder}",
  --     stopOnEntry = false,
  --   },
}
