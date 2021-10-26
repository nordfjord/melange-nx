#!/usr/bin/env node
const path = require('path');
const fs = require('fs');

const tsconfig = require('./tsconfig.base.json');

const bsDependencies = Object.keys(tsconfig.compilerOptions.paths);
const bsconfig = require('./bsconfig.json');

bsconfig['bs-dependencies'] = Array.from(
  new Set([...bsconfig['bs-dependencies'], ...bsDependencies])
);

fs.writeFileSync(
  path.resolve(__dirname, './bsconfig.json'),
  JSON.stringify(bsconfig, null, 2)
);
