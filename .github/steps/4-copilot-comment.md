<!--
  <<< Author notes: Step 4 >>>
  Start this step by acknowledging the previous step.
  Define terms and link to docs.github.com.
-->

## Step 4: Using comments to generate code with Copilot

_Nicely done utilizing the Copilot tab!_ :partying_face:

You now have leveraged the Copilot quick tab auto-suggest as well as the Copilot hub to accept AI generated suggestions.

Now lets see how you can leverage comments to generate Copilot suggestions!

### :keyboard: Activity: Pull the latest code to the Codespace repo.

> **Note**
> Pull MUST be done prior to the next activity.

1. Use the VS Code terminal to pull the latest code:

   ```
   git pull
   ```

### :keyboard: Activity: Generate Copilot suggested code from comments.

1. From inside the codespace in the VS Code explorer window, create a new file. (If you closed the Codespace from above, please open it back up or create a new Codespace.)
2. Name the file `comments.js`.
3. Type the following comment into the file:
   ```
   // Create web server
   ```
4. Press `enter` to go to a new line.
5. Copilot will suggest a code block.
6. Hover over the red squiggly and select the `...`

   > **Note**
   > If you don't see the copilot code block suggestion or the red squiggly and the three dots `...`, you can type `control + enter` to bring up the GitHub Copilot completions panel.

7. Click `Open Completions Panel`. Copilot will synthesise around 10 different code suggestions. You should see something like this:
   ![Screen Shot 2023-04-25 at 3 59 42 PM](https://user-images.githubusercontent.com/26442605/234425509-74ea96e0-bbd6-417b-84c5-73546ac7b2cd.png)
8. Find a solution you like and click `Accept Solution`.
9. Your `comments.js` file will be updated with your solution.

### :keyboard: Activity: Push code to your repository from the codespace

1. Use the VS Code terminal to add the `comments.js` file to the repository:

   ```
   git add comments.js
   ```

2. Next from the VS Code terminal stage and commit the changes to the repository:

   ```
   git commit -m "Copilot third commit"
   ```

3. Finally from the VS Code terminal push to code to the repository:

   ```
   git push
   ```

**Wait about 60 seconds then refresh your repository landing page for the next step.**
